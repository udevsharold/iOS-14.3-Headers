/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HFServiceDescriptor : NSObject <NAIdentifiable> {

	HFServiceDescriptor* _parentServiceDescriptor;
	NSString* _serviceType;
	NSString* _serviceSubtype;
	/*^block*/id _parentServiceDescriptorGenerator;

}

@property (nonatomic,copy,readonly) id parentServiceDescriptorGenerator;                   //@synthesize parentServiceDescriptorGenerator=_parentServiceDescriptorGenerator - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceSubtype;                             //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HFServiceDescriptor * parentServiceDescriptor;              //@synthesize parentServiceDescriptor=_parentServiceDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)init;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptorGenerator:(/*^block*/id)arg3 ;
-(id)parentServiceDescriptorGenerator;
-(HFServiceDescriptor *)parentServiceDescriptor;
-(unsigned long long)hash;
-(NSString *)serviceType;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)serviceSubtype;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptor:(id)arg3 ;
@end

