/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>

@interface PCSupportRequester : APXPCActionRequester
+(id)machService;
+(BOOL)canShareConnection;
-(void)connectionInterrupted;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3 ;
-(void)connectionInvalidated;
-(id)remoteObjectInterface;
-(id)init;
-(id)fetchSegmentData;
@end
