
  # Copyright ©  Mobile Clinic-Electronic Medical Records.
  #   Permission is granted to copy, distribute and/or modify this document
  #   under the terms of the GNU Free Documentation License, Version 1.3
  #   or any later version published by the Free Software Foundation;
  #   with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
  #   A copy of the license is included in the section entitled "GNU
  #   Free Documentation License".

module PatientsHelper

def sex(type)
    if(type == 1)
         "Male"
    else
        "Female"
  end
end

def find_FirstName(id)
    User.find_by_sql("SELECT 'firstName' FROM 'appusers' WHERE 'userName' ='#{id}'").first.try(:firstName)
       
    end

def find_LastName(id)
    User.find_by_sql("SELECT 'lastName' FROM 'appusers' WHERE 'userName' = '#{id}'").first.try(:lastName)
        
end

# def find_FirstName(id)
#     User.find_by_sql("SELECT 'firstName' FROM appusers WHERE 'userName' ='#{id}'").first.try(:firstName)
       
#     end

# def find_LastName(id)
#     User.find_by_sql("SELECT 'lastName' FROM appusers WHERE 'userName' = '#{id}'").first.try(:lastName)
        
# end

end