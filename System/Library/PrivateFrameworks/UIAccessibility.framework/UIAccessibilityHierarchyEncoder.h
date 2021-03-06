/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject {

	BOOL _shouldResolveRemoteElements;
	id _rootElement;
	UIAccessibilityElementTraversalOptions* _traversalOptions;

}

@property (nonatomic,retain) id rootElement;                                                         //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,retain) UIAccessibilityElementTraversalOptions * traversalOptions;              //@synthesize traversalOptions=_traversalOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldResolveRemoteElements;                                       //@synthesize shouldResolveRemoteElements=_shouldResolveRemoteElements - In the implementation block
-(void)setTraversalOptions:(UIAccessibilityElementTraversalOptions *)arg1 ;
-(void)setShouldResolveRemoteElements:(BOOL)arg1 ;
-(BOOL)shouldResolveRemoteElements;
-(void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3 ;
-(id)encodeWithError:(id*)arg1 ;
-(CGRect)_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3 ;
-(id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2 ;
-(id)rootElement;
-(void)setRootElement:(id)arg1 ;
-(UIAccessibilityElementTraversalOptions *)traversalOptions;
@end

