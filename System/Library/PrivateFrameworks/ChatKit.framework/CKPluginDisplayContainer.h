/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {

	IMPluginPayload* _pluginPayload;
	UIImage* _composeImage;

}

@property (nonatomic,retain) IMPluginPayload * pluginPayload;              //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) UIImage * composeImage;                       //@synthesize composeImage=_composeImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pluginDisplayContainerWithPluginPayload:(id)arg1 composeImage:(id)arg2 ;
+(id)unarchiveFromData:(id)arg1 error:(id*)arg2 ;
-(void)setComposeImage:(UIImage *)arg1 ;
-(IMPluginPayload *)pluginPayload;
-(UIImage *)composeImage;
-(id)pasteboardItemProvider;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

