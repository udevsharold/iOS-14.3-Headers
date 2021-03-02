/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate {

	/*^block*/id _namedEntityRecordsSetup;
	/*^block*/id _namedEntityRecordsHandler;
	/*^block*/id _namedEntityRecordsCompletion;
	/*^block*/id _recentNamedEntityRecordsSetup;
	/*^block*/id _recentNamedEntityRecordsHandler;
	/*^block*/id _recentNamedEntityRecordsCompletion;
	/*^block*/id _resetNamedEntityRecordData;

}

@property (nonatomic,copy) id namedEntityRecordsSetup;                         //@synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsHandler;                       //@synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsCompletion;                    //@synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsSetup;                   //@synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsHandler;                 //@synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsCompletion;              //@synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id resetNamedEntityRecordData;                      //@synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData - In the implementation block
-(id)recentNamedEntityRecordsCompletion;
-(id)recentNamedEntityRecordsHandler;
-(void)setNamedEntityRecordsCompletion:(id)arg1 ;
-(void)setRecentNamedEntityRecordsCompletion:(id)arg1 ;
-(id)resetNamedEntityRecordData;
-(void)setResetNamedEntityRecordData:(id)arg1 ;
-(id)namedEntityRecordsHandler;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(id)namedEntityRecordsCompletion;
-(void)recordLoadingCompletion;
-(void)recentRecordLoadingCompletion;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(id)description;
-(void)setRecentNamedEntityRecordsSetup:(id)arg1 ;
-(unsigned char)recordLoadingSetup;
-(void)setRecentNamedEntityRecordsHandler:(id)arg1 ;
-(void)setNamedEntityRecordsSetup:(id)arg1 ;
-(void)resetRecordData;
-(id)recentNamedEntityRecordsSetup;
-(id)namedEntityRecordsSetup;
-(id)initWithName:(id)arg1 ;
-(unsigned char)recentRecordLoadingSetup;
-(void)setNamedEntityRecordsHandler:(id)arg1 ;
@end
