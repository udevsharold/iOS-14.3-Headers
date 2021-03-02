/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXGradientFactory.h>

@protocol SXGradientFactory <NSObject>
@required
-(id)gradientForColorStops:(id)arg1 angle:(double)arg2;

@end


@class NSString;

@interface SXGradientFactory : NSObject <SXGradientFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)colorsFromColorStops:(id)arg1 ;
-(id)gradientForColorStops:(id)arg1 angle:(double)arg2 ;
-(id)locationsFromColorStops:(id)arg1 ;
@end
