/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapSelectionHandler.h>

@protocol PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2 ;
@end

