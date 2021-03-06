/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXDocumentSectionManager.h>

@protocol SXDocumentSectionManager <NSObject>
@required
-(void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(CGPoint)arg3 size:(CGSize)arg4;
-(double)heightForBlueprint:(id)arg1 canvasSize:(CGSize)arg2 traitCollection:(id)arg3;

@end


@protocol SXDocumentSectionHosting;
@class SXViewport, NSMutableDictionary, NSMutableSet, NFMultiDelegate, NSString;

@interface SXDocumentSectionManager : NSObject <SXViewportChangeListener, SXDocumentSectionManager> {

	id<SXDocumentSectionHosting> _hosting;
	SXViewport* _viewport;
	NSMutableDictionary* _blueprints;
	NSMutableSet* _visibleViewControllers;
	NFMultiDelegate* _multiScrollDelegate;

}

@property (nonatomic,__weak,readonly) id<SXDocumentSectionHosting> hosting;              //@synthesize hosting=_hosting - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                    //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * blueprints;                         //@synthesize blueprints=_blueprints - In the implementation block
@property (nonatomic,readonly) NSMutableSet * visibleViewControllers;                    //@synthesize visibleViewControllers=_visibleViewControllers - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * multiScrollDelegate;                    //@synthesize multiScrollDelegate=_multiScrollDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)visibleViewControllers;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXViewport *)viewport;
-(NSMutableDictionary *)blueprints;
-(void)endImpressions;
-(id)view;
-(void)updateViewControllerVisibility;
-(NFMultiDelegate *)multiScrollDelegate;
-(id)initWithSectionHosting:(id)arg1 viewport:(id)arg2 appStateMonitor:(id)arg3 ;
-(id<SXDocumentSectionHosting>)hosting;
-(void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2 ;
-(void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(CGPoint)arg3 size:(CGSize)arg4 ;
-(double)heightForBlueprint:(id)arg1 canvasSize:(CGSize)arg2 traitCollection:(id)arg3 ;
-(void)performDisappearanceTransitionForVisibleViewControllers;
-(id)viewController;
@end

