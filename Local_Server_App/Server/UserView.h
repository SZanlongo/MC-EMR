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
//  UserView.h
//  Mobile Clinic
//
//  Created  on 3/23/13. 
//

#import <Cocoa/Cocoa.h>
#import "UserObject.h"
@interface UserView : NSViewController<NSTableViewDataSource,NSTableViewDelegate>

@property (weak) IBOutlet NSTableView *tableView;
@property (weak) IBOutlet NSTextField *usernameLabel;
@property (weak) IBOutlet NSComboBox *primaryRolePicker;
@property (weak) IBOutlet NSProgressIndicator *loadIndicator;

- (IBAction)refreshTable:(id)sender;
- (IBAction)commitChanges:(id)sender;
- (IBAction)cloudSync:(id)sender;

@end
