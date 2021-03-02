/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCRActivity, _DASActivity;

@interface SCRDASActivityMetadata : NSObject {

	unsigned long long _state;
	SCRActivity* _activity;
	_DASActivity* _dasActivity;

}

@property (assign,nonatomic) unsigned long long state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SCRActivity * activity;                  //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) _DASActivity * dasActivity;              //@synthesize dasActivity=_dasActivity - In the implementation block
-(SCRActivity *)activity;
-(void)setActivity:(SCRActivity *)arg1 ;
-(unsigned long long)state;
-(id)description;
-(void)setDasActivity:(_DASActivity *)arg1 ;
-(_DASActivity *)dasActivity;
-(void)setState:(unsigned long long)arg1 ;
@end
