/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class NSDictionary, NSString;

@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary * _allUnsanitizedStringValues; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSDictionary * allStringValues; 
@property (readonly) NSString * defaultStringValue; 
+(BOOL)supportsSecureCoding;
+(id)sanitizeString:(id)arg1 ;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(NSDictionary *)allStringValues;
-(id)_allUnsanitizedStringValuesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LocalizedString*)arg4 ;
-(NSString *)defaultStringValue;
-(NSDictionary *)_allUnsanitizedStringValues;
-(void)_LSRecord_resolve__allUnsanitizedStringValues;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)stringValueWithPreferredLocalizations:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 ;
-(NSString *)stringValue;
-(id)description;
-(id)debugDescription;
@end

