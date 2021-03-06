/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBWindowHideState : NSObject {

	BOOL _hidden;
	double _desiredAlpha;

}

@property (getter=isHidden) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) double desiredAlpha;               //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(double)desiredAlpha;
-(void)setDesiredAlpha:(double)arg1 ;
-(id)description;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
@end

