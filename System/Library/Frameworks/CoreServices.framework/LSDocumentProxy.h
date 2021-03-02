/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {

	SCD_Struct_LS15 _sourceAuditToken;
	BOOL _isContentManaged;
	NSURL* _URL;
	NSString* _name;
	NSString* _typeIdentifier;
	NSString* _MIMEType;

}

@property (getter=isImageOrVideo,readonly) BOOL imageOrVideo; 
@property (nonatomic,readonly) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * typeIdentifier;                                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * containerOwnerApplicationIdentifier; 
@property (getter=isContentManaged,nonatomic,readonly) BOOL contentManaged;                 //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_LS15* sourceAuditToken; 
@property (nonatomic,readonly) BOOL sourceIsManaged; 
@property (nonatomic,readonly) const SCD_Struct_LS15* managedSourceAuditToken; 
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const SCD_Struct_LS15*)arg5 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const SCD_Struct_LS15*)arg4 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(BOOL)arg4 ;
+(id)documentProxyForURL:(id)arg1 isContentManaged:(BOOL)arg2 sourceAuditToken:(const SCD_Struct_LS15*)arg3 ;
+(id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const SCD_Struct_LS15*)arg2 ;
+(id)documentProxyForURL:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 ;
+(id)documentProxyForURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)applicationsOrClaimBindings:(BOOL)arg1 availableForOpeningWithStyle:(unsigned char)arg2 handlerRank:(id)arg3 limit:(unsigned long long)arg4 XPCConnection:(id)arg5 error:(id*)arg6 ;
-(id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4 ;
-(id)_boundIconInfo;
-(id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(BOOL)arg5 sourceAuditToken:(const SCD_Struct_LS15*)arg6 ;
-(id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)arg1 handlerRank:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 error:(id*)arg5 ;
-(BOOL)sourceIsManaged;
-(id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1 ;
-(id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2 ;
-(BOOL)isImageOrVideo;
-(id)availableClaimBindingsForMode:(unsigned char)arg1 handlerRank:(id)arg2 error:(id*)arg3 ;
-(id)availableClaimBindingsForMode:(unsigned char)arg1 error:(id*)arg2 ;
-(NSString *)containerOwnerApplicationIdentifier;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(id)applicationsAvailableForOpeningWithError:(id*)arg1 ;
-(optional<LaunchServices::BindingEvaluator>*)_bindingEvaluatorWithAuditToken:(const SCD_Struct_LS15*)arg1 ;
-(id)availableClaimBindingsReturningError:(id*)arg1 ;
-(const SCD_Struct_LS15*)sourceAuditToken;
-(const SCD_Struct_LS15*)managedSourceAuditToken;
-(NSString *)typeIdentifier;
-(NSString *)MIMEType;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)description;
-(NSString *)name;
-(id)debugDescription;
-(NSURL *)URL;
-(BOOL)isContentManaged;
-(void)encodeWithCoder:(id)arg1 ;
@end
