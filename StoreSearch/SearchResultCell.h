//
//  SearchResultCell.h
//  StoreSearch
//
//  Created by Seak Meng Lay.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SearchResult;

@interface SearchResultCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *artistNameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *artworkImageView;

- (void)configureForSearchResult:(SearchResult *)searchResult;

@end
