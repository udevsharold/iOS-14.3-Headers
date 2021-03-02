/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(CGSize)coordinate;
-(CGPoint)pointInLayer:(id)arg1 bound:(CGRect)arg2 ;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(MKAnnotationView *)annotationView;
-(double)pointOffsetForDistanceOffset:(double)arg1 ;
@end
