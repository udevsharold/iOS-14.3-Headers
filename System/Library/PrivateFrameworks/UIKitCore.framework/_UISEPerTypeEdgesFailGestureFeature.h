/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@class NSDictionary, NSString;

@interface _UISEPerTypeEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {

	NSDictionary* _edgeTypeSubfeatures;

}

@property (nonatomic,readonly) unsigned long long touchedEdges; 
@property (nonatomic,readonly) NSDictionary * edgeTypeSubfeatures;              //@synthesize edgeTypeSubfeatures=_edgeTypeSubfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)touchedEdges;
-(id)debugDictionary;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(id)initWithEdgeTypeSubfeatures:(id)arg1 ;
-(NSDictionary *)edgeTypeSubfeatures;
-(void)featureDidChangeState:(id)arg1 ;
@end
