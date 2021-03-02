/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTIDSyncEngineDelegate
@required
-(id)recordWithID:(id)arg1;
-(void)accountDidChangeWithUserRecordID:(id)arg1;
-(void)syncEngineDidStartWithError:(id)arg1;
-(void)recordWasSaved:(id)arg1;
-(void)recordWasFailedToSave:(id)arg1;
-(void)recordWasFetched:(id)arg1;
-(void)recordWasDeleted:(id)arg1;

@end
