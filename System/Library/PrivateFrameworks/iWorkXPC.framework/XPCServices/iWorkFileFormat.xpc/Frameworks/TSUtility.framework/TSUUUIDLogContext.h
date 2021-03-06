/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSULogContext.h>

@class NSString;

@interface TSUUUIDLogContext : NSObject <TSULogContext> {

	NSString* _publicString;
	NSString* _privateString;

}

@property (readonly) NSString * publicString;                       //@synthesize publicString=_publicString - In the implementation block
@property (readonly) NSString * privateString;                      //@synthesize privateString=_privateString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)publicString;
-(NSString *)privateString;
@end

