/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CEKAnimationGeneratorAnimation : NSObject {

	double _startTime;
	double _duration;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(id)updateHandler;
-(double)startTime;
-(double)duration;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

