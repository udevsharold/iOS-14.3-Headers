/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKPKStroke.h>

@class PKMutableStroke, PKStroke;

@interface TSKPKMutableStroke : TSKPKStroke {

	PKMutableStroke* _yukonMutableStroke;
	PKStroke* _peaceMutableStroke;

}

@property (nonatomic,retain) PKMutableStroke * yukonMutableStroke;              //@synthesize yukonMutableStroke=_yukonMutableStroke - In the implementation block
@property (nonatomic,retain) PKStroke * peaceMutableStroke;                     //@synthesize peaceMutableStroke=_peaceMutableStroke - In the implementation block
-(CGPoint)locationAtIndex:(unsigned long long)arg1 ;
-(void)setLocation:(CGPoint)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithPKStroke:(id)arg1 pencilAnnotationDrawingScale:(double)arg2 ;
-(PKMutableStroke *)yukonMutableStroke;
-(PKStroke *)peaceMutableStroke;
-(id)internalPencilKitStroke;
-(void)transformWithTransform:(CGAffineTransform)arg1 ;
-(void)setYukonMutableStroke:(PKMutableStroke *)arg1 ;
-(void)setPeaceMutableStroke:(PKStroke *)arg1 ;
@end

