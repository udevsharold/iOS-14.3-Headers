/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputDeviceDiscoverySessionFactory.h>

@protocol AVFigRouteDiscovererFactory;
@class NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory> {

	id<AVFigRouteDiscovererFactory> _routeDiscovererFactory;

}

@property (nonatomic,readonly) id<AVFigRouteDiscovererFactory> routeDiscovererFactory;              //@synthesize routeDiscovererFactory=_routeDiscovererFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithRouteDiscovererFactory:(id)arg1 ;
-(id<AVFigRouteDiscovererFactory>)routeDiscovererFactory;
-(id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2 ;
@end

