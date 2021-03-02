/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRSAppHistoryClientToServerInterface <NSObject>
@required
-(void)fetchSessionFeatureKeysWithCompletion:(/*^block*/id)arg1;
-(void)setSessionFeatureKeys:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchUIContextStatesWithCompletion:(/*^block*/id)arg1;
-(void)fetchSessionUIContextStatesWithCompletion:(/*^block*/id)arg1;
-(void)fetchSessionEchoContextStatesWithCompletion:(/*^block*/id)arg1;

@end
