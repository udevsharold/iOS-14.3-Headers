/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSBlockSentinelSignalContext.h>

@protocol BSBlockSentinelSignalContext <NSObject>
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) id context; 
@required
-(BOOL)isFailed;
-(BOOL)isComplete;
-(id)context;

@end


@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {

	BOOL _complete;
	BOOL _failed;
	id _context;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (getter=isFailed,nonatomic,readonly) BOOL failed;                  //@synthesize failed=_failed - In the implementation block
@property (nonatomic,readonly) id context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFailed;
-(BOOL)isComplete;
-(id)context;
@end

