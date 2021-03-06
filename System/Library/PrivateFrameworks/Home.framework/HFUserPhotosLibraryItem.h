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

@class HMHome, HMUser, NSString;

@interface HFUserPhotosLibraryItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMHome* _home;
	HMUser* _user;

}

@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMUser * user;                                  //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMUser *)user;
-(id)init;
-(HMHome *)home;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)initWithUser:(id)arg1 inHome:(id)arg2 ;
-(NSString *)description;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

