/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, FCInterestToken, NSArray;

@interface FCHeldRecords : NSObject {

	NSDictionary* _recordsByID;
	NSDictionary* _interestTokensByID;

}

@property (nonatomic,readonly) NSDictionary * recordsByID;                       //@synthesize recordsByID=_recordsByID - In the implementation block
@property (nonatomic,readonly) NSDictionary * interestTokensByID;                //@synthesize interestTokensByID=_interestTokensByID - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id onlyRecord; 
@property (nonatomic,readonly) FCInterestToken * onlyInterestToken; 
@property (nonatomic,readonly) NSArray * allRecordIDs; 
@property (nonatomic,readonly) NSArray * allRecords; 
+(id)heldRecordsByMerging:(id)arg1 with:(id)arg2 ;
-(FCInterestToken *)onlyInterestToken;
-(id)onlyRecord;
-(id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2 ;
-(id)recordWithID:(id)arg1 ;
-(id)heldRecordsForIDs:(id)arg1 ;
-(id)transformRecordsByIDWithBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)recordsByID;
-(id)transformRecordsInOrder:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)heldRecordsPassingTest:(/*^block*/id)arg1 ;
-(id)transformRecordsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(NSArray *)allRecordIDs;
-(void)enumerateRecordsAndInterestTokensWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)interestTokenForID:(id)arg1 ;
-(NSDictionary *)interestTokensByID;
-(NSArray *)allRecords;
@end
