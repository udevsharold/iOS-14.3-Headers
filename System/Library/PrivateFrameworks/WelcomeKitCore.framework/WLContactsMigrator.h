/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class CNContactStore, NSString;

@interface WLContactsMigrator : NSObject <WLDataclassMigrating> {

	CNContactStore* _contactStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
-(id)dataType;
-(id)init;
-(id)contentType;
-(BOOL)accountBased;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)_vcardDataWithoutCustomFieldsFromVcardData:(id)arg1 ;
@end

