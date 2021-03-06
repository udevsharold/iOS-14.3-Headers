/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RealityKit/RealityKit-Structs.h>
@class _TtC10RealityKit28__EntityAccessibilityWrapper, NSString;

@interface RealityKit.__EntityAccessibilityWrapper : NSObject {

	 entity;
	 rootEntityWrapper;

}

@property (readonly,nonatomic) _TtC10RealityKit28__EntityAccessibilityWrapper * rootEntityWrapper; 
@property (readonly,nonatomic) unsigned long long identifier; 
@property (readonly,nonatomic) BOOL isEntityRoot; 
@property (readonly,nonatomic) BOOL isEntityAccessible; 
@property (readonly,nonatomic) NSString * entityLabel; 
@property (readonly,nonatomic) NSString * entityDescription; 
@property (readonly,nonatomic) BOOL isEntityActive; 
-(id)init;
-(unsigned long long)identifier;
-(NSString *)entityDescription;
-(NSString *)entityLabel;
-(_TtC10RealityKit28__EntityAccessibilityWrapper *)rootEntityWrapper;
-(CGRect)calculateScreenBoundingRectIn:(id)arg1 ;
-(BOOL)isEntityRoot;
-(BOOL)isEntityAccessible;
-(BOOL)isEntityActive;
@end

