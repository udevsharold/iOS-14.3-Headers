/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying> {

	AKPageController* _page;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                                 //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic,__weak) AKPageController * page;              //@synthesize page=_page - In the implementation block
+(id)featureWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(AKPageController *)page;
-(void)setPage:(AKPageController *)arg1 ;
-(CGRect)rect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setRect:(CGRect)arg1 ;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
@end

