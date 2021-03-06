/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentController.h>
@class SXLayoutBlueprint, NSArray;


@protocol SXComponentController <SXAXAssistiveTechStatusChangeListener,SXLayoutIntegrator>
@property (nonatomic,readonly) SXLayoutBlueprint * presentedBlueprint; 
@property (nonatomic,readonly) NSArray * flattenedComponentViews; 
@property (nonatomic,readonly) BOOL isPresented; 
@required
-(BOOL)isPresented;
-(void)removeObserver:(id)arg1;
-(id)componentViewForIdentifier:(id)arg1;
-(id)componentViewForPoint:(CGPoint)arg1;
-(void)addObserver:(id)arg1;
-(id)componentsInRect:(CGRect)arg1;
-(NSArray *)flattenedComponentViews;
-(SXLayoutBlueprint *)presentedBlueprint;
-(id)componentViewsForRole:(int)arg1;

@end


@protocol SXComponentHosting, SXComponentViewEngine, SXDOMObjectProviding;
@class SXLayoutBlueprint, NSArray, SXViewport, NSHashTable, NSMutableDictionary, NSMutableArray, SXPresentationAttributes, NSString;

@interface SXComponentController : NSObject <SXViewportChangeListener, SXComponentController> {

	BOOL _isPresented;
	BOOL _isPresenting;
	SXLayoutBlueprint* _presentedBlueprint;
	NSArray* _flattenedComponentViews;
	id<SXComponentHosting> _host;
	SXViewport* _viewport;
	id<SXComponentViewEngine> _componentViewEngine;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	NSHashTable* _observers;
	NSMutableDictionary* _mappedComponentViews;
	NSMutableArray* _sortedComponentViews;
	NSMutableArray* _nestedComponentViews;
	SXPresentationAttributes* _presentationAttributes;

}

@property (nonatomic,readonly) SXViewport * viewport;                                          //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXComponentViewEngine> componentViewEngine;                  //@synthesize componentViewEngine=_componentViewEngine - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                     //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mappedComponentViews;                       //@synthesize mappedComponentViews=_mappedComponentViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedComponentViews;                            //@synthesize sortedComponentViews=_sortedComponentViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * nestedComponentViews;                            //@synthesize nestedComponentViews=_nestedComponentViews - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                //@synthesize isPresenting=_isPresenting - In the implementation block
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<SXComponentHosting> host;                               //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXLayoutBlueprint * presentedBlueprint;                         //@synthesize presentedBlueprint=_presentedBlueprint - In the implementation block
@property (nonatomic,readonly) NSArray * flattenedComponentViews;                              //@synthesize flattenedComponentViews=_flattenedComponentViews - In the implementation block
@property (nonatomic,readonly) BOOL isPresented;                                               //@synthesize isPresented=_isPresented - In the implementation block
-(id<SXComponentHosting>)host;
-(BOOL)isPresented;
-(SXPresentationAttributes *)presentationAttributes;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)setIsPresenting:(BOOL)arg1 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)setHost:(id<SXComponentHosting>)arg1 ;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(NSMutableDictionary *)mappedComponentViews;
-(SXViewport *)viewport;
-(void)renderContentsIfNeededForComponents:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)componentViewForIdentifier:(id)arg1 ;
-(BOOL)isPresenting;
-(void)updatePresentationStateForNestedComponentViews:(id)arg1 presentationState:(long long)arg2 ;
-(id)componentViewForPoint:(CGPoint)arg1 ;
-(void)fadeComponent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)renderBounds;
-(void)addObserver:(id)arg1 ;
-(id)presentComponentBlueprint:(id)arg1 inHost:(id)arg2 columnLayout:(id)arg3 ;
-(NSMutableArray *)nestedComponentViews;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 parentComponent:(id)arg2 withOffset:(CGPoint)arg3 ;
-(void)presentComponentsInBlueprint:(id)arg1 ;
-(id)componentViewForPoint:(CGPoint)arg1 inComponents:(id)arg2 ;
-(void)removeComponentsInLayoutBlueprint:(id)arg1 removedFromLayoutBlueprint:(id)arg2 ;
-(id)componentsInRect:(CGRect)arg1 ;
-(NSArray *)flattenedComponentViews;
-(NSMutableArray *)sortedComponentViews;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(void)assistiveTechnologyStatusDidChange;
-(id)componentViews;
-(id)initWithViewport:(id)arg1 componentViewEngine:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 toState:(long long)arg2 ;
-(void)presentBlueprint:(id)arg1 forParentComponentView:(id)arg2 inHost:(id)arg3 ;
-(id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2 ;
-(void)integrateBlueprint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(SXLayoutBlueprint *)presentedBlueprint;
-(void)setSortedComponentViews:(NSMutableArray *)arg1 ;
-(void)setMappedComponentViews:(NSMutableDictionary *)arg1 ;
-(void)setNestedComponentViews:(NSMutableArray *)arg1 ;
-(id<SXComponentViewEngine>)componentViewEngine;
-(id)componentViewsForRole:(int)arg1 ;
-(void)updatePresentationStateForNestedComponentView:(id)arg1 presentationState:(long long)arg2 ;
-(void)updateVisibilityStatesForComponentViews:(id)arg1 ;
@end

