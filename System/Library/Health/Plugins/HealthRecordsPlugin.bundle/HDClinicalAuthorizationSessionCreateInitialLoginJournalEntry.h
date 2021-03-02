/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalAuthorizationSessionCreateJournalEntry.h>

@class NSString;

@interface HDClinicalAuthorizationSessionCreateInitialLoginJournalEntry : HDClinicalAuthorizationSessionCreateJournalEntry {

	NSString* _gatewayExternalID;

}

@property (nonatomic,copy,readonly) NSString * gatewayExternalID;              //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)gatewayExternalID;
-(id)initWithState:(id)arg1 queryString:(id)arg2 gatewayExternalID:(id)arg3 ;
@end
