/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKLinedPaper : NSObject <NSCopying> {

	double _horizontalInset;
	CGPoint _lineSpacing;

}

@property (nonatomic,readonly) CGPoint lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) double horizontalInset;              //@synthesize horizontalInset=_horizontalInset - In the implementation block
-(double)horizontalInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)lineSpacing;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLineSpacing:(CGPoint)arg1 horizontalInset:(double)arg2 ;
@end
