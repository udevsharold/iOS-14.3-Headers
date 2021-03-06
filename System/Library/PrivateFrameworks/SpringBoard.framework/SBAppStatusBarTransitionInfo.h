/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject {

	UIStatusBarStyleRequest* _startStyleRequest;
	long long _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	long long _endOrientation;
	int _transition;
	BOOL _zoomOther;

}

@property (nonatomic,copy) UIStatusBarStyleRequest * startStyleRequest;              //@synthesize startStyleRequest=_startStyleRequest - In the implementation block
@property (assign,nonatomic) long long startOrientation;                             //@synthesize startOrientation=_startOrientation - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * endStyleRequest;                //@synthesize endStyleRequest=_endStyleRequest - In the implementation block
@property (assign,nonatomic) long long endOrientation;                               //@synthesize endOrientation=_endOrientation - In the implementation block
@property (assign,nonatomic) int transition;                                         //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL zoomOther;                                         //@synthesize zoomOther=_zoomOther - In the implementation block
-(int)transition;
-(void)setTransition:(int)arg1 ;
-(id)description;
-(UIStatusBarStyleRequest *)endStyleRequest;
-(UIStatusBarStyleRequest *)startStyleRequest;
-(void)setStartStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(long long)startOrientation;
-(void)setStartOrientation:(long long)arg1 ;
-(void)setEndStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(long long)endOrientation;
-(void)setEndOrientation:(long long)arg1 ;
-(BOOL)zoomOther;
-(void)setZoomOther:(BOOL)arg1 ;
@end

