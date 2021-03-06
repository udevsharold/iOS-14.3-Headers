/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADLayoutOptions : NSObject <NSCopying> {

	CGSize _containerSize;
	CGSize _reorientedContainerSize;

}

@property (assign,nonatomic) CGSize containerSize;                        //@synthesize containerSize=_containerSize - In the implementation block
@property (assign,nonatomic) CGSize reorientedContainerSize;              //@synthesize reorientedContainerSize=_reorientedContainerSize - In the implementation block
-(id)_initWithContainerSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)containerSize;
-(void)setReorientedContainerSize:(CGSize)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
-(CGSize)reorientedContainerSize;
@end

