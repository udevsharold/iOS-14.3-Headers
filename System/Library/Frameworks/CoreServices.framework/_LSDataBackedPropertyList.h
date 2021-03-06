/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSLazyPropertyList.h>

@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {

	NSData* _plistData;
	_LSPlistHint* _plistHint;

}
+(BOOL)supportsSecureCoding;
-(void)detach;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)uncheckedObjectsForKeys:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPropertyListData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_plistHint;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

