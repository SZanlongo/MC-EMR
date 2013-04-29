/*
 *  Copyright ©  Mobile Clinic-Electronic Medical Records.
 *  Permission is granted to copy, distribute and/or modify this document
 *  under the terms of the GNU Free Documentation License, Version 1.3
 *  or any later version published by the Free Software Foundation;
 *  with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
 *  A copy of the license is included in the section entitled "GNU
 *  Free Documentation License".
 */
//
//  SearchPatientViewController.h
//  Mobile Clinic
//
//  Created  on 2/18/13. 
//

#import <UIKit/UIKit.h>
#import "ScreenNavigationDelegate.h"
#import "PatientResultTableCell.h"
#import "PBVerificationController.h"

typedef enum MobileClinicMode{
    kTriageMode,
    kDoctorMode,
    kPharmacistMode
} MCMode;

@interface SearchPatientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PBVerificationDelegate>{
    ScreenHandler handler;
    BOOL shouldDismiss;
}

@property (assign) MCMode mode;
@property (nonatomic, strong) NSMutableDictionary * patientData;
@property (nonatomic, strong) NSArray * patientSearchResultsArray;

@property (strong, nonatomic) IBOutlet UITextField *patientNameField;
@property (strong, nonatomic) IBOutlet UITextField *familyNameField;
@property (weak, nonatomic) IBOutlet UITableView *searchResultTableView;

@property (strong, nonatomic) UIButton *patientFound;

- (IBAction)searchByNameButton:(id)sender;
- (IBAction)searchByFingerprintButton:(id)sender;

- (void)setScreenHandler:(ScreenHandler) myHandler;
-(void)resetData;
@end
