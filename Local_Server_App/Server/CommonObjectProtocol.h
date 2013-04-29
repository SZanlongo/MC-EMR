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
//  CommonObjectProtocol.h
//  Mobile Clinic
//
//  Created  on 3/11/13.
//


#import "BaseObjectProtocol.h"
#import <Foundation/Foundation.h>

@protocol CommonObjectProtocol <BaseObjectProtocol>

+(NSString*)DatabaseName;

-(NSArray*)FindAllObjects;

-(NSAttributedString *)printFormattedObject:(NSDictionary *)object;

-(NSArray*)FindAllObjectsUnderParentID:(NSString*)parentID;

-(void)pushToCloud:(CloudCallback)onComplete;

-(void)pullFromCloud:(CloudCallback)onComplete;

-(NSArray *)covertAllSavedObjectsToJSON;
@end
