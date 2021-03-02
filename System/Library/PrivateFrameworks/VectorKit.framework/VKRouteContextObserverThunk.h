/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKRouteContextObserver.h>

@class NSString;

@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver> {

	LabelTransitSupport* _transitSupport;
	retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>* _routeContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)routeContextStateDidChange:(id)arg1 ;
-(id)initWithRouteContext:(id)arg1 transitSupport:(LabelTransitSupport*)arg2 ;
@end
