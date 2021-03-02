/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/UTTypeRecord.h>

@class LSBundleRecord;

@interface _UTDeclaredTypeRecord : UTTypeRecord {

	LSBundleRecord* _weakDeclaringBundleRecord;

}

@property (readonly) unsigned _rawFlags; 
@property (readonly) LSBundleRecord * _declaringBundleRecord; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(BOOL)isDynamic;
-(id)pedigree;
-(BOOL)isWildcard;
-(BOOL)isExported;
-(unsigned)_rawFlags;
-(BOOL)isImported;
-(BOOL)isCoreType;
-(id)referenceURL;
-(id)declaration;
-(id)_delegatePath;
-(BOOL)isDeclared;
-(id)_declaringBundleBookmarkWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypeStructuresWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(id)_declaringBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(unsigned)_rawFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_delegatePathWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)parentTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve__declaringBundleBookmark;
-(id)identifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve_tagSpecification;
-(id)_localizedDescriptionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)tagSpecificationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)childTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)versionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)referenceURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve_childTypeIdentifiers;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)tagSpecification;
-(BOOL)isInPublicDomain;
-(void)_LSRecord_resolve_pedigree;
-(id)declarationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_declaringBundleBookmark;
-(void)_LSRecord_resolve_parentTypeIdentifiers;
-(void)_LSRecord_resolve__localizedDescription;
-(id)childTypeIdentifiers;
-(LSBundleRecord *)_declaringBundleRecord;
-(void)_LSRecord_resolve__rawFlags;
-(id)parentTypeIdentifiers;
-(id)_localizedDescription;
-(void)_LSRecord_resolve_identifier;
-(void)_LSRecord_resolve__declaringBundleRecord;
-(id)declaringBundleRecord;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_LSRecord_resolve__delegatePath;
-(void)_LSRecord_resolve_declaration;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(void)_LSRecord_resolve_version;
-(void)_LSRecord_resolve_referenceURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)identifier;
-(id)version;
-(BOOL)isActive;
@end
