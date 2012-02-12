//
//  SearchResult.m
//  StoreSearch
//
//  Created by Seak Meng Lay on 2/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "SearchResult.h"

@implementation SearchResult
@synthesize name=_name;
@synthesize artistname =_artistname;
@synthesize artworkURL60 = _artworkURL60;
@synthesize artworkURL100 = _artworkURL100;
@synthesize storeURL = _storeURL;
@synthesize kind = _kind;
@synthesize currency = _currency;
@synthesize price = _price;
@synthesize genre = _genre;

- (NSComparisonResult)compareName:(SearchResult *)other
{
    return [self.name localizedCaseInsensitiveCompare:other.name];
}

@end

