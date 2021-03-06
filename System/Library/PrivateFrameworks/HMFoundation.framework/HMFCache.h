/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject {

	BOOL _exists;
	NSURL* _URL;

}

@property (copy,readonly) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
@property (getter=isExists,readonly) BOOL exists;              //@synthesize exists=_exists - In the implementation block
+(id)defaultCache;
-(id)init;
-(NSURL *)URL;
-(id)initWithName:(id)arg1 ;
-(BOOL)isExists;
@end

