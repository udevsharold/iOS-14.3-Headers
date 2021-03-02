/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface POPAnimationEvent : NSObject {

	unsigned long long _type;
	double _time;
	NSString* _animationDescription;

}

@property (nonatomic,copy) NSString * animationDescription;              //@synthesize animationDescription=_animationDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double time;                              //@synthesize time=_time - In the implementation block
-(double)time;
-(id)description;
-(unsigned long long)type;
-(void)_appendDescription:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 ;
-(NSString *)animationDescription;
-(void)setAnimationDescription:(NSString *)arg1 ;
@end
