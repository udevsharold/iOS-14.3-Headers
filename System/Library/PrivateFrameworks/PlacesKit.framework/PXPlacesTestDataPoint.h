/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesGeotaggable.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable> {

	CLLocationCoordinate2D _coordinate;
	NSString* _name;

}

@property (readonly) CGImageRef image; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGImageRef)image;
-(long long)compareTo:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 location:(CLLocationCoordinate2D)arg2 ;
@end

