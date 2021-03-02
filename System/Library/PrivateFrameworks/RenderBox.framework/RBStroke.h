/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBStroke <NSObject>
@property (nonatomic,readonly) int strokeType; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
@required
-(int)strokeType;
-(float)borderWidth;
-(CGRect)boundingRect;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2;

@end
