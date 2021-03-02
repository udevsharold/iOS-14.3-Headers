/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUSandboxedURL.h>

@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {

	TSUSandboxedURL* _originalSandboxedURL;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)originalSandboxedURLForNormalizing;
-(id)initWithURL:(id)arg1 originalSandboxedURL:(id)arg2 ;
-(BOOL)hasSandboxAccess;
@end
