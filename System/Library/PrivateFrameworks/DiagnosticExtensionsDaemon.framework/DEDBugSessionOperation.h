/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSDictionary, NSString;

@interface DEDBugSessionOperation : NSObject <NSSecureCoding, DEDSecureArchiving> {

	long long _type;
	NSDictionary* _options;
	NSString* _identifier;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (retain) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)hashingKeyWithId:(id)arg1 type:(long long)arg2 ;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(long long)type;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(id)hashingKey;
@end
