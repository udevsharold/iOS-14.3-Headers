/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData;

@interface NLParsecDataManager : NSObject {

	NSMutableArray* m_entries;

}

@property (nonatomic,readonly) NSData * serializableData; 
+(unsigned short)maxNumberOfPOIsAllowed;
+(void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)notifyStoredSerializedDataChanged;
+(BOOL)supportsDomain:(id)arg1 ;
-(id)getEntries;
-(void)dealloc;
-(void)insertEntry:(id)arg1 ;
-(NSData *)serializableData;
-(void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3 ;
@end

