/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMFNetAddressInternal : HMFObject {

	unsigned long long _addressFamily;
	NSString* _addressString;

}

@property (nonatomic,readonly) unsigned long long addressFamily;              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressString;                 //@synthesize addressString=_addressString - In the implementation block
-(NSString *)addressString;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(unsigned long long)addressFamily;
@end
