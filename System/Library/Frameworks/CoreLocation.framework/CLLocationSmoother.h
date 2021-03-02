/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject {

	_CLLocationSmootherProxy* _locationManagerSmootherProxy;

}

@property (nonatomic,retain,readonly) _CLLocationSmootherProxy * locationManagerSmootherProxy; 
@property (assign,nonatomic) id<CLLocationManagerDelegateInternal> delegate; 
-(void)dealloc;
-(void)smoothLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)smoothLocations:(id)arg1 ;
-(_CLLocationSmootherProxy *)locationManagerSmootherProxy;
-(void)setDelegate:(id<CLLocationManagerDelegateInternal>)arg1 ;
-(id<CLLocationManagerDelegateInternal>)delegate;
@end
