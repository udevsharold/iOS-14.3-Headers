/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCSecureUserDatum.h>
@class NSString;


@protocol BCSecureUserDatum <BCCloudData>
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * value; 
@required
-(NSString *)key;
-(NSString *)value;

@end


@class NSString, NSDate, CKRecord, NSData;

@interface BCSecureUserDatum : BCCloudData <BCSecureUserDatum>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyIDKey;
-(id)recordType;
-(id)zoneName;
-(id)mutableCopy;
-(id)identifier;
-(NSString *)debugDescription;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromUserDatum:(id)arg1 withMergers:(id)arg2 ;
@end

