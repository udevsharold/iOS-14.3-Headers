/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketRequest : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
+(id)safe_initWithHeaders:(id)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(id)initWithHeaders:(id)arg1 ;
@end
