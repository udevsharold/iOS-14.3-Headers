/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFErrorProviderContext;
@interface WFErrorPromptOperation : WFUserPromptOperation <WFNetworkView> {

	id<WFErrorProviderContext> _context;

}

@property (nonatomic,retain) id<WFErrorProviderContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)errorPromptOperationWithContext:(id)arg1 ;
-(void)setContext:(id<WFErrorProviderContext>)arg1 ;
-(id<WFErrorProviderContext>)context;
@end

