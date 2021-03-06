/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMResidentDevice, NSString;

@interface HFResidentDeviceItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMResidentDevice* _residentDevice;

}

@property (nonatomic,readonly) HMResidentDevice * residentDevice;              //@synthesize residentDevice=_residentDevice - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(NSString *)description;
-(id)initWithResidentDevice:(id)arg1 ;
-(HMResidentDevice *)residentDevice;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

