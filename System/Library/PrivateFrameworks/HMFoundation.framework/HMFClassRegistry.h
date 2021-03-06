/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {

	hmf_unfair_data_lock_s _lock;
	NSMutableDictionary* _classes;
	Class _defaultClass;

}

@property (nonatomic,readonly) Class defaultClass;              //@synthesize defaultClass=_defaultClass - In the implementation block
-(Class)defaultClass;
-(Class)classForKey:(id)arg1 ;
-(id)init;
-(id)initWithDefaultClass:(Class)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
@end

