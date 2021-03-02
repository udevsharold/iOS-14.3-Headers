/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCEncoding.h>
#import <libobjc.A.dylib/RBSXPCDecoding.h>

@protocol OS_xpc_object;
@class NSObject, NSKeyedArchiver, NSKeyedUnarchiver, NSString;

@interface RBSXPCCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding> {

	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _codingContext;
	NSKeyedArchiver* _archiver;
	NSKeyedUnarchiver* _unarchiver;
	int _finalized;

}

@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> XPCConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)rbs_testNSEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(id)coder;
+(id)rbs_testEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(id)coderWithMessage:(id)arg1 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(NSObject*<OS_xpc_object>)message;
-(id)init;
-(id)createMessage;
-(id)initWithMessage:(id)arg1 ;
-(id)decodeStringForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(id)_finishCoding;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)_implicitDecodeXPCObjectForKey:(id)arg1 ;
-(void)_removeValueForKey:(id)arg1 ;
@end
