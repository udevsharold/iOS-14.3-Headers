/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSXPCListenerEndpoint : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding> {

	void* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_initWithConnection:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(id)_endpoint;
-(void)encodeWithCoder:(id)arg1 ;
@end
